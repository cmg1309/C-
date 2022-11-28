using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace ConsoleApp3
{
    class Matrix2D
    {
        private double[,] num;
        public Matrix2D()
        {
            num = new double[2, 2];
        }
        public double this[int row, int col]
        {
            get
            {
                return num[row, col];
            }
            set
            {
                num[row, col] = value;
            }
        }
        public static Matrix2D operator +(Matrix2D A, Matrix2D B)
        {
            Matrix2D C = new Matrix2D();
            C[0, 0] = A[0, 0] + B[0, 0]; C[0, 1] = A[0, 1] + B[0, 1];
            C[1, 0] = A[1, 0] + B[1, 0]; C[1, 1] = A[1, 1] + B[1, 1];
            return C;
        }
        public override string ToString()
        {
            string r_string;
            r_string = " \n";
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                    r_string += String.Format($"M[{i},{j}]={num[i, j]} ");
                r_string += String.Format("\n");
            }
            return r_string;
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Matrix2D A = new Matrix2D();
            Matrix2D B = new Matrix2D();
            Matrix2D C = new Matrix2D();
            A[0, 0] = 1.1; A[0, 1] = 2.2; A[1, 0] = 3.3; A[1, 1] = 4.4;
            B[0, 0] = 2.1; B[0, 1] = 3.2; B[1, 0] = 4.3; B[1, 1] = 5.4;
            C = A + B;
            Console.WriteLine("****************** A, Matrix2D =========== ");
            Console.WriteLine(A);
            Console.WriteLine("****************** B, Matrix2D =========== ");
            Console.WriteLine(B);
            Console.WriteLine("****************** Result=A+B, Matrix2D =========== ");
            Console.WriteLine(C);
        }
    }
}


// 1번
//internal class Program
//{
//    static void Main(string[] args)
//    {
//        char chr = char.Parse(args[0]);         // 명령행 인자 3개를 받음
//        double a = double.Parse(args[1]);
//        double b = double.Parse(args[2]);

//        double mulresult = a * b;
//        double addresult = a + b;
//        if (chr == '*')         // 명령행 인자로 받은 chr이 + 면 참 나머지는 거짓
//            Console.WriteLine("{0} {1} {2} = {3}", a, chr, b, mulresult);
//        else
//            Console.WriteLine("{0} {1} {2} = {3}", a, chr, b, addresult);
//    }
//}


// 2번
//class IA
//{
//    public int a;
//    public int b;
//}
//class program
//{
//    static int class_sum(IA class_ia)       // 입력된 값을 받아서 합을 리턴해줌
//    {
//        return class_ia.a + class_ia.b;
//    }
//    static void Main(string[] args)
//    {
//        int result;
//        IA class_ia = new IA();

//        Console.Write("First Operand => ");
//        int a = int.Parse(Console.ReadLine());
//        class_ia.a = a;                 // 입력된 값을 class_ia 객체의 a,b로 초기화 

//        Console.Write("Second Operand => ");
//        int b = int.Parse(Console.ReadLine());
//        class_ia.b = b;

//        result = class_sum(class_ia);
//        Console.Write("a+b = " + class_ia.a + "+" + class_ia.b + "=" + result);
//    }
//}


// 3번
//delegate double calc_delegate(double a, double b);
//class AddMul
//{
//    public double Calc_Add(double a, double b)      // 값 계산
//    {
//        return a + b;
//    }
//    public double Calc_Mul(double a, double b)
//    {
//        return a * b;
//    }
//}
//class program
//{
//    static void Main(string[] args)
//    {
//        double a, b, sum, mul;

//        Console.Write("First Input dat => ");
//        a = double.Parse(Console.ReadLine());
//        Console.Write("Second Input dat => ");
//        b = double.Parse(Console.ReadLine());

//        AddMul addmul = new AddMul();
//        calc_delegate d1, d2;
//        d1 = new calc_delegate(addmul.Calc_Add);        // d1에add
//        d2 = new calc_delegate(addmul.Calc_Mul);        // d2에 mul

//        sum = d1(a, b); // sum에 d1 결과 저장
//        Console.WriteLine("ADD : {0} + {1} = {2}", a, b, sum);
//        mul = d2(a, b); // mul에 d2 결과 저장
//        Console.WriteLine("MUL : {0} + {1} = {2}", a, b, mul);

//    }
//}


// 4번
//public delegate void MyEventHandler(int k);

//public class Button
//{
//    public event MyEventHandler Push;
//    public int a;
//    public void OnPush()
//    {
//        Console.Write("Enter integer input(10 이하 정수 입력) => ");
//        if (Push != null)
//            Push(a);
//    }
//}
//public class EventHandlerClass
//{
//    public void MyMehod(int input)
//    {
//        Button bt = new Button();
//        input = int.Parse(Console.ReadLine());
//        bt.a = input;
//        for (int i = 0; i <= input; i++)
//            Console.Write("i={0}, ", i);
//        Console.WriteLine();
//    }

//}
//public class Program
//{
//    static void Main(string[] args)
//    {
//        Button button = new Button();
//        EventHandlerClass obj = new EventHandlerClass();
//        button.Push += new MyEventHandler(obj.MyMehod);
//        button.OnPush();
//    }
//}


// 5번
//interface IShape
//{
//    void CalArea();
//    double Radius
//    {
//        get;
//        set;
//    }
//}
//class Circle : IShape
//{
//    public double radius;
//    public double ar;
//    public void CalArea()
//    {
//        radius = double.Parse(Console.ReadLine());
//        ar = Math.PI * radius * radius;
//    }
//    public double Radius
//    {
//        get { return ar; }
//        set { ar = value; }
//    }
//    public void PrintCircleArea()
//    {
//        Console.WriteLine("Circle Area : radius = {0}, Area = {1}", radius, ar);
//    }
//}
//internal class Program
//{
//    static void Main(string[] args)
//    {
//        Console.Write("원의 반지름 입력(double 형) > ");
//        Circle circle = new Circle();
//        circle.CalArea();
//        IShape cir = new Circle();
//        circle.PrintCircleArea();
//    }
//}