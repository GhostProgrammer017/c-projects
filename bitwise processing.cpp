#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>


main()
{
	FILE *file1=fopen("sayilar0.txt","w");
	FILE *file2=fopen("sayilar1.txt","w");
	srand(time(NULL));
	for(int i=0;i<100;i++)
	{
		unsigned short rst=rand()%100;
		printf("%u  ",rst);
		unsigned short bes=1<<4;
		unsigned short kntrl=rst&bes;
		if(kntrl==0)
		{
			unsigned short dort=1<<3;
			rst=rst|dort;
			fprintf(file1,"%d ",rst);
			printf("5. biti 0 ve 4. biti 1 yapildiginda= %u\n",rst);
		}
		else
		{
			unsigned short uc=1<<2;
			uc=~uc;
			rst=rst&uc;
			fprintf(file2,"%d ",rst);
			printf("5. biti 1 ve 3. biti 0 yapildiginda= %u\n",rst);
		}
	}
	fclose(file1);
	fclose(file2);
}
