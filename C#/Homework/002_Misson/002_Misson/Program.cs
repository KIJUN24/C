// 정수 자료형의 min ~ Max 출력하기

using System;


namespace _002_Misson
{
    internal class Program
    {
        static void Main(string[] args)
        {
            sbyte minSbyte = sbyte.MinValue;
            sbyte maxSbyte = sbyte.MaxValue;

            byte minByte = byte.MinValue;
            byte maxByte = byte.MaxValue;

            short minShort = short.MinValue;
            short maxShort = short.MaxValue;

            ushort minUShort = ushort.MinValue;
            ushort maxUShort = ushort.MaxValue;

            int minInt = int.MinValue; ;
            int maxInt = int.MaxValue; ;

            long minLong = long.MinValue; 
            long maxLong = long.MaxValue;

            ulong minULong = ulong.MinValue;
            ulong maxULong = ulong.MaxValue;

            Console.WriteLine($"sbyte \t min : {minSbyte} \t\t\t ~ Max : {maxSbyte}");
            Console.WriteLine($"byte \t min : {minByte} \t\t\t ~ Max : {maxByte}");
            Console.WriteLine($"short \t min : {minShort} \t\t\t ~ Max : {maxShort}");
            Console.WriteLine($"ushort \t min : {minUShort} \t\t\t ~ Max : {maxUShort}");
            Console.WriteLine($"int \t min : {minInt} \t\t ~ Max : {maxInt}");
            Console.WriteLine($"long \t min : {minLong} \t ~ Max : {maxLong}");
            Console.WriteLine($"ulong \t min : {minULong} \t\t\t ~ Max : {maxULong}");
                
        }
    }
}
