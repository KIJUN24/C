using System;


namespace _003
{
    internal class Program
    {
        static void Main(string[] args)
        {
            float float_min = float.MinValue;
            float float_max = float.MaxValue;
            Console.WriteLine($"float : {float_min} ~ {float_max}");

            double double_min = double.MinValue;
            double double_max = double.MaxValue;
            Console.WriteLine($"double : {double_min} ~ {double_max}");
            
            decimal decimal_min = decimal.MinValue;
            decimal decimal_max = decimal.MaxValue;
            Console.WriteLine($"decimal : {decimal_min} ~ {decimal_max}");

        }
    }
}
