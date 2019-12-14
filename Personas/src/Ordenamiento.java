
import com.sun.prism.impl.BufferUtil;
import sun.security.util.Length;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author tony
 */
public class Ordenamiento 
{
 
public  int[] bubblesort(int arr[])
{
    
   
    int size = arr.length;
    
    for(int i= 0;i < size; i ++)
    {
        for(int j = 0;j < size - 2; j++)
        {
            if(arr[j] > arr[j+1])
            {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }  
    }

    
      return arr;  
}

public void printout(int value[])
{
    for(int i= 0;i < value.length; i ++)
        System.out.println("Printing value: "+value[i]);
}
    
}
