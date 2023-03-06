// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int left = 0;
  int right = size - 1;
  int mid = (right + left) / 2;
  int kolv = 0;
  while (right >= left) {
    int mid = (right + left) / 2;
    if (*(arr + mid) == value) {
      kolv++;
      int mid1 = mid;
      while ((*(arr + mid1 + 1)) == value) {
        kolv++;
        mid1 += 1;
      kolv += 1;
      int newmid = mid;
      while ((*(arr + mid + 1)) == value) {
        kolv += 1;
        mid += 1;
      }
      while ((*(arr + mid1 - 1)) == value) {
        kolv++;
        mid1 -= 1;
      while ((*(arr + newmid - 1)) == value) {
        kolv += 1;
        newmid -= 1;
      }
      return kolv;
    } else if (*(arr + mid) > value) {
			right = mid - 1;
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return kolv;
}
