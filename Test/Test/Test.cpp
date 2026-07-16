// Test.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>
//#include "Takasa.h"
#include "Domain\Multi.h"
using ::testing::AtLeast;

TEST(TestCaseName, TestName) {
	Multi s;
	

	
  EXPECT_EQ(s.multi(20,5),100);
}
