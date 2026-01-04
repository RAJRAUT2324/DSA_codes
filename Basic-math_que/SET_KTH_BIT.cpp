int setKthBit(int n, int k) {
  int task=1<<k;
  int ans=n|task;
  return ans;
}

// Set the Kth Bit
// n = 8 1000
// k = 2 0010
// here is logic that 1<<2;
// 0001<<2 ->0100