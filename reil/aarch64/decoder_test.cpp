// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cstdio>
#include <random>

#include "gtest/gtest.h"

#include "reil/aarch64.h"

namespace reil {
namespace aarch64 {

// NOTE: This file is generated by aarch64_decoder_test_generator.py - please
// add new tests there and regenerate this file instead of modifying this file
// directly.

TEST(AArch64Decoder, Adr) {
  uint32_t opcode = 0x10000000;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kAdr);
}

TEST(AArch64Decoder, AddImmediate) {
  uint32_t opcode = 0x91008ffd;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kAddImmediate);
}

TEST(AArch64Decoder, LdaxrBug1) {
  uint32_t opcode = 0xc85ffe88;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kLdaxr);
}

TEST(AArch64Decoder, LdaxrBug1) {
  uint32_t opcode = 0xf9400108;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kLdaxr);
}

TEST(AArch64Decoder, SimdLdrLiteral) {
  uint32_t opcode = 0x9c000000;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdLdrLiteral);
}

TEST(AArch64Decoder, SimdLdp) {
  uint32_t opcode = 0xad400400;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdLdp);
}

TEST(AArch64Decoder, SimdLdnp) {
  uint32_t opcode = 0xac400400;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdLdnp);
}

TEST(AArch64Decoder, SimdStp) {
  uint32_t opcode = 0xad000400;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdStp);
}

TEST(AArch64Decoder, SimdStnp) {
  uint32_t opcode = 0xac000400;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdStnp);
}

TEST(AArch64Decoder, SimdLdrUnscaledImmediatePostindex) {
  uint32_t opcode = 0x3c401400;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdLdr);
  ASSERT_EQ(insn.operands.size(), 2);
  ASSERT_EQ(absl::get<aarch64::decoder::Register>(insn.operands[0]).size, 8);
  ASSERT_EQ(absl::get<aarch64::decoder::Register>(insn.operands[0]).name,
            aarch64::decoder::Register::kV0);
}

TEST(AArch64Decoder, SimdStrUnscaledImmediatePostindex) {
  uint32_t opcode = 0x3c80141f;
  aarch64::decoder::Instruction insn =
      aarch64::decoder::DecodeInstruction(opcode);

  std::cerr << insn << std::endl;

  ASSERT_EQ(insn.opcode, aarch64::decoder::kSimdStr);
  ASSERT_EQ(insn.operands.size(), 2);
  ASSERT_EQ(absl::get<aarch64::decoder::Register>(insn.operands[0]).size, 128);
  ASSERT_EQ(absl::get<aarch64::decoder::Register>(insn.operands[0]).name,
            aarch64::decoder::Register::kV31);
}

}  // namespace aarch64
}  // namespace reil

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
