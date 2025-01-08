// Header only module

// function templates
template<typename T, typename T1>
T1 myMin3(T, T, T1);

template<typename T, typename T1>
T1 myMin3(T val1, T val2, T1 val3) {
  T1 min = val1;
  if (min > val2)
    min = val2;
  else if(min > val3)
    min = val3;
  else 
    min = val1;  
  return min;
}