#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
DWORD WINAPI ThreadFunc(void* data) {
  // Do stuff.  This will be the first function called on the new thread.
  // When this function returns, the thread goes away.  See MSDN for more details.
  while(1)
  {
      static a = 100;
    a=a+1;
    printf("%d\n",a);
    Sleep(100);
    }
//   return 0;
}

int main() {
  HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
  if (thread) {
    printf("Suck my dick\n");
    Sleep(1000);
    // Optionally do stuff, such as wait on the thread.
  }
  if(thread)
  {
    printf("Suck my dick\n");
    Sleep(1000);
  }
  system("pause");
}