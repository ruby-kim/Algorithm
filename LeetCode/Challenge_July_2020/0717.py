import heapq
import collections

class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        """
        [defaultdict]
        * import collections
        * key값이 없을 경우 미리 지정해놓은 default dictionary값을 반환
        
        [heapq]
        * binary tree 기반의 min heap 자료구조 제공
        * 원소들이 항상 정렬된 상태로 추가/삭제 됨 => 가장 작은 값은 언제나 인덱스 0, 트리의 루트에 위치
        * 모든 원소 k는 자식 원소들(2k + 1, 2k + 2)보다 작거나 같도록 원소가 추가/삭제 됨
          heap[k] <= heap[2 * k + 1] and heap [k] <= heap[2 * k + 2]
                1  ---> root
              /   \
             3     5
            / \   /
           4   8 7
        
        1) 생성: heap = []
        2) 추가: heapq.heappush(heap, 3)
        3) 삭제: heapq.heappop(heap, elem)  # elem-> default: root
        4) 삭제하지 않고 최소값 얻기: heap[0]
        5) 기존 리스트를 힙으로 변환: heapq.heapify(heap)
        6) [응용] 최대힙: 각 값에 대한 우선 순위를 구한 후, (우선순위, 값) 구조의 tuple을 힙에 추가/삭제
           값을 읽어올 때는 각 tuple에서 인덱스 1에 있는 값을 취하면 됨
           nums = [4, 1, 7, 3, 8, 5]
           heap = []
           
           for num in nums:
               heapq.heappush(heap, (-num, num))
           
           while heap:
               print(heap.heappop(heap)[1])          # 8 7 5 4 3 1
        """
        # 1) generate word count hash list
        word_cnt = self.calc_cnt(words)
        word_cnt_pairs = []
        
        # 2) turn the hash list into sortable list
        for word, cnt in word_cnt.items():
            word_cnt_pairs.append((-cnt, word))
            
        # 3) heapify the list
        heapq.heapify(word_cnt_pairs)
        res = []
        
        # 4) pop top k items from the heap
        for _ in range(k):
            res.append(heapq.heappop(word_cnt_pairs)[1])
        return res        
    
    def calc_cnt(self, words):
        result = collections.defaultdict(int)
        for word in words:
            result[word] += 1
        return result
