/**********************************************************************
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2014, Christian Gehring
 * All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Autonomous Systems Lab nor ETH Zurich
 *     nor the names of its contributors may be used to endorse or
 *     promote products derived from this software without specific
 *     prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */
/*!
* @file     ControllerInterface.hpp
* @author   Christian Gehring
* @date     Dec, 2014
* @brief
*/
#pragma once

#include <string>
#include <roco/time/Time.hpp>
#include <roco/common/assert_macros.hpp>
#include <roco/common/log_messages.hpp>

namespace roco {

//! Abstract interface class for controllers.
/*!
 *
 */
class ControllerInterface
{
 public:
  ControllerInterface() {};
  virtual ~ControllerInterface() {};

  virtual const std::string& getName() const = 0;
  virtual void setName(std::string& name) = 0;

  virtual bool isInitialized() const = 0;
  virtual bool isCreated() const = 0;
  virtual bool isRealRobot() const = 0;

  virtual bool createController(double dt) = 0;
  virtual bool initializeController(double dt) = 0;
  virtual bool advanceController(double dt) = 0;
  virtual bool cleanupController() = 0;

  virtual const Time& getTime() const = 0;
  virtual void setTime(const Time& time) = 0;

  virtual bool isCheckingCommands() const = 0;
  virtual void setIsCheckingCommands(bool isChecking) = 0;

  virtual bool isCheckingRobotState() const = 0;
  virtual void setIsCheckingRobotState(bool isChecking) = 0;
};

} /* namespace robot_controllers */