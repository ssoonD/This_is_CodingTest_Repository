private static int mySolution(int m, int k, int[] arr, int max, int second) {
      boolean flag = true;
      int cnt = 0;
      int result = 0;
      while(m-- > 0) {

            if (cnt == k) {
                flag = false;
            }

            if (flag && cnt < k) {
                result += arr[max];
                cnt++;
            }

            if (!flag) {
                cnt = 0;
                result += arr[second];
                flag = true;
            }

        }
        return result;
}
