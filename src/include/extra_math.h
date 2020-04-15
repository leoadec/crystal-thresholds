// a few extra math functions that aren't built in;

int factorial(int n) {
  int result = 1;

  for (int i=1; i<=n; i++) result = i*result;

  return result;
}
