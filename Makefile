lj:lj.o
	cc -o lj lj.o
lj.o:lj.c
	cc -c lj.c
randStudent:randStudent.o
	cc -o randStudent randStudent.o
randStudent.o:randStudent.c student_info.h
	cc -c randStudent.c
clean:
	lj.o randStudent.o
