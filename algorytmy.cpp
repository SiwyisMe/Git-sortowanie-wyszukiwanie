#include "algorytmy.hpp"
#include <iostream>

void wypelnij_tablice(int t[], int size) {
  for(int i = 0; i < size; i++) {
    t[i] = rand() % 100; 
  }
}

void wydrukuj_tablice(int t[], int size) {
  for(int i = 0; i < size; i++) {
    std::cout << t[i] << " ";
  }
  std::cout << std::endl;
}

void sortowanie_babelkowe(int t[], int size) {
  for(int i = 0; i < size - 1; i++) {
    for(int j = 0; j < size - i - 1; j++) {
      if(t[j] > t[j+1]) {
        std::swap(t[j], t[j+1]);
      }
    }
  }
}

void sortowanie_przez_scalanie(int t[], int size) {
  if (size <= 1) return;

  int mid = size / 2;

  int* left = new int[mid];
  int* right = new int[size - mid];

  for (int i = 0; i < mid; i++) {
    left[i] = t[i];
  }
  for (int i = mid; i < size; i++) {
    right[i - mid] = t[i];
  }

  sortowanie_przez_scalanie(left, mid);
  sortowanie_przez_scalanie(right, size - mid);

  int i = 0, j = 0, k = 0;
  while (i < mid && j < (size - mid)) {
    if (left[i] <= right[j]) {
      t[k++] = left[i++];
    } else {
      t[k++] = right[j++];
    }
  }

  while (i < mid) {
    t[k++] = left[i++];
  }
  while (j < (size - mid)) {
    t[k++] = right[j++];
  }

  delete[] left;
  delete[] right;
}


void sortowanie_szybkie(int t[], int size) {
  if(size <= 1) return;
  
  int pivot = t[size - 1];
  int partitionIndex = 0;
  
  for(int i = 0; i < size - 1; i++) {
    if(t[i] < pivot) {
      std::swap(t[i], t[partitionIndex]);
      partitionIndex++;
    }
  }
  
  std::swap(t[partitionIndex], t[size - 1]);
  
  sortowanie_szybkie(t, partitionIndex);
  sortowanie_szybkie(t + partitionIndex + 1, size - partitionIndex - 1);
}

void sortowanie_przez_wstrzasanie(int t[], int size) {
  for(int i = size - 1; i > 0; i--) {
    for(int j = 0; j < i; j++) {
      if(t[j] > t[j+1]) {
        std::swap(t[j], t[j+1]);
      }
    }
  }
}

void sortowanie_przez_wstawianie(int t[], int size) {
  for(int i = 1; i < size; i++) {
    int key = t[i];
    int j = i - 1;
    while(j >= 0 && t[j] > key) {
      t[j+1] = t[j];
      j--;
    }
    t[j+1] = key;
  }
}
int wyszukiwanie_binarne(int t[], int size, int key) {
  int left = 0;
  int right = size - 1;
  
  while(left <= right) {
    int mid = left + (right - left) / 2;
    if(t[mid] == key) {
      return mid;
    }
    else if(t[mid] < key) {
      left = mid + 1; 
    }
    else {
      right = mid - 1;
    }
  }
  return -1; 
}

int wyszukiwanie_liniowe(int t[], int size, int key) {
  for(int i = 0; i < size; i++) {
    if(t[i] == key) {
      return i;
    }
  }
  return -1;
}

int wyszukiwanie_liniowe_z_wart(int t[], int size, int key) {
  int i = 0;
  t[size] = key;
  while(t[i] != key) {
    i++;
  }
  return (i < size) ? i : -1;
}

int wyszukiwanie_interpolacyjne(int t[], int size, int key) {
  int left = 0;
  int right = size - 1;

  while(left <= right && key >= t[left] && key <= t[right]) {
    int pos = left + ((key - t[left]) * (right - left)) / (t[right] - t[left]);

    if(t[pos] == key) {
      return pos;
    }

    if(t[pos] < key) {
      left = pos + 1;
    } else {
      right = pos - 1; 
    }
  }

  return -1;
}

int wyszukiwanie_skokowe(int t[], int size, int key)
{
    int blockSize = sqrt(size);

    int left = 0;
    int right = blockSize - 1;

    while (t[std::min(right, size - 1)] < key)
    {
        left = right + 1;
        right += blockSize;
        if (right > size - 1)
        {
            right = size - 1;
        }
    }

    for (int i = left; i <= right; i++)
    {
        if (t[i] == key)
        {
            return i;
        }
    }

    return -1;
}
