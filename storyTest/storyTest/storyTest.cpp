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

