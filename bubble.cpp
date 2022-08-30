//bubble sort
 void bubbleSort(std::vector<int>& arr)
 {
   int temp;
     for (int i = arr.size(); i > 0; i--)
   {
      bool has_swapped = false;
      for (int j = 0; j < i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            has_swapped = true;
         }
      }
      if (has_swapped == false)
      {
         break;
      }
   }
}






}








