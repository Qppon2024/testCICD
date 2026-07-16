// storyTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>
//#include "Takasa.h"
#include "Domain/Story.h"
using ::testing::AtLeast;

TEST(TestCaseName, TestName) {
	Story s;
	
	
  EXPECT_EQ(s.ans(20,5,20),120);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    int result = RUN_ALL_TESTS();
    return result; // テスト失敗時は 1 以上が返り、成功時は 0 が返る
}
