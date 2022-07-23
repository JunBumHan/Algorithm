#include <stdio.h>

int n, i;

void print_(int z) {
  for (int s = 1; s <= z * 4; ++s)
    printf("_");
}

void f(int x) {
  print_(i);
  puts("\"재귀함수가 뭔가요?\"");
  if (x == 0) {
    print_(i);
    puts("\"재귀함수는 자기 자신을 호출하는 함수라네\"");
    return;
  }

  print_(i);
  puts("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.");
  print_(i);
  puts("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.");
  print_(i);
  puts("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"");

  ++i;
  f(--x); // x-- 로 할 경우에는 감소가 되지 않음.
  print_(i--);
  puts("라고 답변하였지.");
}

int main() {
  scanf("%d", &n);
  puts("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
  f(n);
  puts("라고 답변하였지.");
}
