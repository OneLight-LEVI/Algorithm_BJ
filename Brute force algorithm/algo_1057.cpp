/*============================================
1057. 토너먼트
[문제]
김지민은 N명이 참가하는 스타 토너먼트에 진출했다. 토너먼트는 다음과 같이 진행된다. 일단 N명의 참가자는 번호가 1번부터 N번까지 배정받는다. 그러고 난 후에 서로 인접한 번호끼리 스타를 한다. 이긴 사람은 다음 라운드에 진출하고, 진 사람은 그 라운드에서 떨어진다. 만약 그 라운드의 참가자가 홀수명이라면, 마지막 번호를 가진 참가자는 다음 라운드로 자동 진출한다. 다음 라운드에선 다시 참가자의 번호를 1번부터 매긴다. 이때, 번호를 매기는 순서는 처음 번호의 순서를 유지하면서 1번부터 매긴다. 이 말은 1번과 2번이 스타를 해서 1번이 진출하고, 3번과 4번이 스타를 해서 4번이 진출했다면, 4번은 다음 라운드에서 번호 2번을 배정받는다. 번호를 다시 배정받은 후에 한 명만 남을 때까지 라운드를 계속 한다.

마침 이 스타 대회에 임한수도 참가했다. 김지민은 갑자기 스타 대회에서 우승하는 욕심은 없어지고, 몇 라운드에서 임한수와 대결하는지 궁금해졌다. 일단 김지민과 임한수는 서로 대결하기 전까지 항상 이긴다고 가정한다. 1 라운드에서 김지민의 번호와 임한수의 번호가 주어질 때, 과연 김지민과 임한수가 몇 라운드에서 대결하는지 출력하는 프로그램을 작성하시오.

[입력]
첫째 줄에 참가자의 수 N과 1 라운드에서 김지민의 번호와 임한수의 번호가 순서대로 주어진다. N은 2보다 크거나 같고, 100,000보다 작거나 같은 자연수이고, 김지민의 번호와 임한수의 번호는 N보다 작거나 같은 자연수이고, 서로 다르다.

[출력]
첫째 줄에 김지민과 임한수가 대결하는 라운드 번호를 출력한다. 만약 서로 대결하지 않을 때는 -1을 출력한다.

[개념]
김지민과 임한수는 서로 만나기 전까지 항상 이긴다는 가정하에 k번 자리에 있다면 이겼을 때 항상 다음 라운드의 k/2번이 된다. 그러므로 김지민의 번호와 임한수가 번호가 같을 때까지 서로의 번호를 2로 반복하여 나눠주면 김지민과 임한수는 그 전 라운드에서 만났다는 것이 된다. 그러므로 0부터 시작해 2로 나눌 때마다 1씩 더해주면 만나는 라운드가 나온다.

1차 시도 - 성공!
메모리 2020KB, 시간 0ms, 코드 길이 150B
============================================*/

#include <iostream>
int main(){
	int n, a, b,cnt=0;		//참가자 수, 김지민의 번호, 임한수의 번호, 만나는 라운드
	std::cin >> n >> a >> b;
	a--;
	b--;
	for(;a!=b;cnt++){
		a>>=1;
		b>>=1;
	}
	std::cout << cnt;
}