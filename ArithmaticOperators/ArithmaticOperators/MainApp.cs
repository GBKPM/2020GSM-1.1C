using System;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
namespace ArithmaticOperators
{
    class MainApp
    {
        static void Main(string[] args)
        {
            int a = 111 + 222;
            Console.WriteLine($"a : {a}");

            int b = a-100;
            Console.WriteLine($"b : {b}");

            int c = b*10;
            Console.WriteLine($"c : {c}");

            double d = c / 6.3; //한쪽이 부동이면 다른 한쪽도 부동으로 변환
            Console.WriteLine($"d : {d}");

            Console.WriteLine($"22 / 7 = {22 / 7}({22 % 7})");
            Console.WriteLine("집에 가고 싶다");
            Console.Write("집");
            Console.Write("집");
            Console.WriteLine("집");
            Console.WriteLine("집~~~");
        }
    }
}
