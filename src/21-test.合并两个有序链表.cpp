#include <vector>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
namespace problem {
#include "21.合并两个有序链表.cpp"
}

auto solution = new problem::Solution();

TEST_CASE("21") {
  auto buildList = [](const std::vector<int> &vals) {
    problem::ListNode dummy(0);
    problem::ListNode *tail = &dummy;
    for (int v : vals) {
      tail->next = new problem::ListNode(v);
      tail = tail->next;
    }
    return dummy.next;
  };

  auto toVector = [](problem::ListNode *head) {
    std::vector<int> out;
    while (head != nullptr) {
      out.push_back(head->val);
      head = head->next;
    }
    return out;
  };

  auto l1 = buildList({1, 2, 4});
  auto l2 = buildList({1, 3, 4});
  auto merged = solution->mergeTwoLists(l1, l2);

  CHECK((toVector(merged) == std::vector<int>{1, 1, 2, 3, 4, 4}));
}
