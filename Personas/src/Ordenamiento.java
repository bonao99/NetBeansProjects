
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
    
public static final int SIZE_OF_INT = 4;

int arr[];

public  int bubblesort(int arr)
{
    int size = arr;
    
    for(int i = 0;i <= size; arr++ )
    {
        for(int j = 0;j <= size -2; j++)
        {
            if(arr[j] > arr[j+1]);
            {
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }  
    }

        
      return int arr;  
}
    
}
