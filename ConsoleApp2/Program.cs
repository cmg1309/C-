using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3장_10번
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] money = { 500, 100, 50, 10, 5, 1 };  // 동전 금액
            int[] change = new int[6];  // 동전 금액의 개수를 넣을 변수
            int pay = 1000;  // 지불한 금액 변수
            int price;  // 제품 가격 변수
            int sum;  // 동전 개수의 합
            int i;

            while (true)
            {
                Console.Write("물건의 가격을 입력하세요 : ");
                price = Int32.Parse(Console.ReadLine());
                if (price >= 1 && price < 1000) break; // 물건의 가격이 1과 같거나 크고 1000보다 작을 시 다음으로 넘어감
                Console.WriteLine("물건의 가격이 1000을 넘었습니다.");
                return; // 물건의 가격이 1보다 작거나 1000보다 클 시 처음으로 돌아감
            }
            pay -= price;
            sum = 0;
            for (i = 0; i < 6; i++) // i가 0부터 5까지 하나씩 증가하는 for문
            {
                change[i] = pay / money[i]; // 동전 금액의 개수[i]가 지불한 금액 나누기 동전 금액[500, 100, 50, 10, 5, 1]
                sum += change[i]; // 동전 개수의 합 = 동전 개수의 합 + 동전 금액의 개수[i]
                pay %= money[i]; // 지불한 금액 = 지불한 금액 변수 % 동전 금액[500, 100, 50, 10, 5, 1]
                if (pay == 0) break; // 만약 지불한 금액이 0과 같을 시 멈춤
            }
            for (i = 0; i < 6; i++)
                Console.WriteLine("{0,23}원 : {1}개", money[i], change[i]);
            Console.WriteLine("거스름돈의 최저 동전 개수 : {0}개", sum);
        }
    }
}
