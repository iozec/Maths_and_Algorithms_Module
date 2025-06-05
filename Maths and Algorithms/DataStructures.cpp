#include "DataStructures.h"



template<typename T>
 T Stack<T>::Pop()
{
     if (Count > 0) {
         Count = Count - 1;
     }
    return Data[Count];
}

 template<typename T>
 T Stack<T>::Peek() {


     return Data [Count -1];
 }

 template<typename T>
 void Stack<T>::Push(T dataToPush)
 {

     if (count < size) {

         Data[Count] = dataToPush
             Count++
     }


 }
 template<typename T>
 Stack<T>::Stack()
 {
     Data = new T[10]
     Size = 10;

 }


 template<typename T>
 Queue<T>::Queue()
 {

     Data = new T[10]
     Size = 10;

 }

 template<typename T>
 void Queue<T>::Push(T dataToPush)
 {
     if (count < size) {

         Data[Count] = dataToPush
             Count++
     }

 }

 template<typename T>
 T Queue<T>::Peek()
 {
     return Data[0];
 }

 template<typename T>
 T Queue<T>::Pop()
 {
     if (Count !> 0) 
     {
         Count = [Count - Count];

         return Data[Count];

         Data = Count + 1
             if (Data % >= 1) {

                 Data = 0
             }

     }
     
 }