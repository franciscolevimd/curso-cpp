#ifndef NUMBERS_H_
#define NUMBERS_H_
template <typename T, typename T2>
T2 great_than(T data_1, T2 data_2) {
  if (data_1 >= data_2) {
    return data_1;
  } else {
    return data_2;
  }
}

template <typename T>
void swap_data(T& data_1, T& data_2) {
    T aux = data_1;
    data_1 = data_2;
    data_2 = aux;
}
#endif  // NUMBERS_H_
