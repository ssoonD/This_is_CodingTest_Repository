private static int mySolution(long n, long k) {
    int cnt = 0;
     while (n != 1) {
        if (n % k != 0) {
              n--;
         } else {
           n /= k;
         }
         cnt++;
     }
   return cnt;
  }
