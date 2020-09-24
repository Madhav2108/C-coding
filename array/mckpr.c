 #include <stdio.h>
int main()
   {
       void message();
       int c;
       printf("c before call=%d\n",c);
       message();
       printf("c after call=%d\n",c);
       return 0;
   }
  void message()
  {
      printf("Only he will survive who is C-t\n");
  }
