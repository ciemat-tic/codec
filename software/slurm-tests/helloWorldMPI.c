/* C Example */
#include <stdio.h>
#include <mpi.h>

int main (argc, argv)
     int argc;
     char *argv[];
{
  int rank, size, namelen;

  MPI_Init (&argc, &argv);  /* starts MPI */
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);    /* get current process id */
  MPI_Comm_size (MPI_COMM_WORLD, &size);    /* get number of processes */

  char   processor_name[MPI_MAX_PROCESSOR_NAME];
  MPI_Get_processor_name(processor_name,&namelen);

  fprintf(stdout,"Process %d of %d is on %s\n",
      rank, size, processor_name);


  printf( "Hello world from process %d of %d\n", rank, size );
  printf( "Now Im going to sleep for a while");
  sleep(30 * (rank + 1) );
  printf( "Goodbye world from process %d of %d\n", rank, size );

  MPI_Finalize();
  return 0;
}
