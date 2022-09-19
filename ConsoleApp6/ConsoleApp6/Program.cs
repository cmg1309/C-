//using System;
//class StringConstantApp
//{
//    public static void Main()
//    {
//        char c = 'A';
//        int i;
//        i = c + 1;
//        Console.WriteLine("c = " + c + "\nnext c = " + (char)i);
//        Console.WriteLine("\"I am a string.\"");
//        Console.WriteLine(@"""I am a string.""");
//    }
//}

//using System;
///// <summary>
///// CommentsApp Class : Convert a hexadigit into binary value
///// </summary>
//class CommentsApp
//{
//    /// <summary>
//    /// Main Method
//    /// </summary>
//    public static void Main()
//    {
//        int value = 0;
//        char ch;
//        Console.Write("Enter a super digit : "); // prompt message
//        ch = (char)Console.Read();
//        switch (ch)
//        {
//            case 'A':
//            case 'B':
//            case 'C':
//            case 'D':
//            case 'E':
//            case 'F':
//                value = ch - 'A' + 10; // code value => binary value
//                break;
//            case 'a':
//            case 'b':
//            case 'c':
//            case 'd':
//            case 'e':
//            case 'f':
//                value = ch - 'a' + 10; // code value => binary value
//                break;
//            default:
//                Console.WriteLine(ch + " is not a hexadigit");
//                break;
//        } // end of switch
//        Console.WriteLine(value);
//    } // end of main()
//}

//using System;
//class IntTypeApp
//{
//    public static void Main()
//    {
//        int i = 1000000;
//        Console.WriteLine(i * i);
//        long l = i;
//        Console.WriteLine(l * l);
//    }
//}

//using System;
//class DoubleVsDecimalApp
//{
//    public static void Main()
//    {
//        double d = 0d;
//        decimal m = 0m;
//        for (int i = 0; i < 1000; i++)
//        {
//            d += 0.10d;
//            m += 0.10m;
//        }
//        Console.WriteLine("0.1d*1000 = " + d);
//        Console.WriteLine("0.1m*1000 = " + m);
//    }
//}

//using System;
//class PointerApp
//{
//    unsafe public static void Swap(int* px, int* py)
//    {
//        int tmp = *px;
//        *px = *py;
//        *py = tmp;
//    }
//    public static void Main()
//    {
//        int x = 1, y = 2;
//        Console.WriteLine("Before : x = " + x + ", y = " + y);
//        unsafe
//        {
//            Swap(&x, &y);
//        }
//        Console.WriteLine(" After : x = " + x + ", y = " + y);
//    }
//}

//using System;
//enum Color { Red, Green, Blue };
//class EnumTypeApp
//{
//    public static void Main()
//    {
//        Color c = Color.Red;
//        c++;
//        int i = (int)c;
//        Console.WriteLine("Cardinality of " + c + " = " + i);
//    }
//}

//using System;
//class ArrayTypeApp
//{
//    public static void Main()
//    {
//        int[] ia = new int[3];
//        int[] ib = { 1, 2, 3 };
//        int i;

//        for (i = 0; i < ia.Length; i++)
//            ia[i] = ib[i];
//        for (i = 0; i < ia.Length; i++)
//            Console.Write(ia[i] + " ");
//        Console.WriteLine();
//    }
//}


using System;
class ArrayOfArrayApp
{
    public static void Main()
    {
        int[][] arrayOfArray = new int[3][];
        int i, j;
        for (i = 0; i < arrayOfArray.Length; i++)
            arrayOfArray[i] = new int[i + 3];
        for (i = 0; i < arrayOfArray.Length; i++)
            for (j = 0; j < arrayOfArray[i].Length; j++)
                arrayOfArray[i][j] = i * arrayOfArray[i].Length + j;
        for (i = 0; i < arrayOfArray.Length; i++)
        {
            for (j = 0; j < arrayOfArray[i].Length; j++)
                Console.Write(" " + arrayOfArray[i][j]);
            Console.WriteLine();
        }
    }
}

