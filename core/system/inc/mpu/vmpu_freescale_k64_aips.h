/*
 * Copyright (c) 2013-2015, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __VMPU_FREESCALE_K64_AIPS_H__
#define __VMPU_FREESCALE_K64_AIPS_H__

#define AIPSx_SLOT_SIZE    0x1000UL
#define AIPSx_SLOT_MAX     0xFE

extern int vmpu_aips_add(uint8_t box_id, void* start, uint32_t size, UvisorBoxAcl acl);
extern void vmpu_aips_switch(uint8_t src_box, uint8_t dst_box);
extern uint32_t vmpu_fault_find_acl_aips(uint8_t box_id, uint32_t fault_addr, uint32_t size);

#endif/*__VMPU_FREESCALE_K64_AIPS_H__*/
