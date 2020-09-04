# Algoritm(Interview)
 Practicing for Algoritm Interview

-- 기본적으로 내가 푼 답안과 강의 답안이 있습니다.

-- 강의 답안과 다른 답안이 나온 적도, 강의 답안이 더욱 효율적인 경우도, 혹은 내가 못 푼 경우도 있으니, 여기에 제시 되지 않은 답안을 가지고 계신분은 같이 공부해봤으면 좋겠습니다.

-------------------------------------------------------------------------------


-58. 이진트리 깊이 우선 탐색
    재귀 함수를 이용하여 모든 경우의 수를 찾음에 있어서, 배열의 flag를 활용하자.


-60. 합이 같은 부분집합
    위에서 모든 경우의 수를 위해 배열의 flag를 이용했다면 지금은 재귀 함수의 매개변수를 활용하도록 하자.

-61. 특정 수 만들기(DFS)
    DFS를 함에 있어서 꼭 이진트리 형태로 내려갈 필요가 없다.
    경우가 다양해 질 수록 많은 수의 가지를 뻗어나가면 된다.
    지금은 3가지의 경우를 생각하면 된다.
    이를 2번의 재귀 함수로 나눌 필요가 없다.
   
-62. 병합정렬
    어렵게 생각할 필요 없다. Left와 Mid, Right로 배열을 분할 한 후 임시 배열에 정렬해서 넣은 후 원래 배열에 복사하는 방식으로 풀어나가자. 재귀함수를 이용해서 분할 하자.

-63. 인접행렬
    인접행렬은 단방향과 양방향 그래프가 있고, 간선(Edge)과 정점(Vertex)로 구성되어있다. 여기에 각 간선에 가중치가 있을 수 있으며 이를 구현하는 방법으로 배열을 사용하는 방법 혹은 인접 리스트를 
    사용하는 방법이 있다.

-64. 경로탐색
    재귀 함수로 역시 정점과 간선을 통해 모든 경로를 찾자. 한가지 팁은 내가 방문한 정점을 확인할 flag를 보관하자.
    
-65. 미로탐색(DFS)
    어렵지 않다. 지금까지 재귀함수를 통해 모든 경우의 수를 찾았는데, 같은 방식으로 상하좌우의 경우를 다 찾으면 된다. 대신 배열의 범위를 벗어나지 않도록 하자.

-66. 경로탐색(인접리스트)
    기존의 DFS방식으로 경우의 수를 찾는건 똑같으나 간선과 정점의 정보를 리스트(백터)로 관리한다는 점이 다르다. 이렇게 되면 2차원 배열보다 검색의 수가 줄어들고 자료구조의 크기(메모리의 크기)를 
    줄일 수 있는 장점이 있다.

-67. 최소비용(인접행렬)
    지금까지의 경로탐색은 행렬의 값이 연결 유무를 나타냈으나 지금은 가중치를 나타내고 있으므로 정점으로 이동할 때마다 가중치의 합산을 계산해 주어야한다.
    그리고, 최소비용을 구하는 방법은 다익스트라 알고리즘이 있으니 이것을 공부하길 바란다.
