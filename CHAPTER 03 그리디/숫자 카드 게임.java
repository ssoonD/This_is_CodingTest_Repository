private static int mySolution(int n, int m) {
      int arr[][] = new int[n][m];

       for(int i = 0; i<arr.length;i++) {
           for(int j = 0; j< arr[i].length;j++) {
               arr[i][j] = sc.nextInt();
            }
       }
       int max = -1;
       for(int i = 0; i<arr.length;i++) {
           int min = 999;
           for(int j = 0; j<arr[i].length;j++) {
              min = Math.min(min,arr[i][j]);
           }
          max = Math.max(max,min);
       }
       return max;
}
