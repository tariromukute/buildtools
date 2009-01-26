// Copyright (C) 2007 Free Software Foundation
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// TR1 2.2.2 Template class shared_ptr [tr.util.smartptr.shared]

#include <tr1/memory>
#include <testsuite_tr1.h>

// { dg-do compile }

// Check the _S_single lock policy can be instantiated. For a thread-enabled
// library this checks the templates can be instantiated for non-default
// lock policy, for a single-threaded lib this is redundant but harmless.
using namespace __gnu_test;
using std::tr1::__shared_ptr;
using std::tr1::_S_single;
template class __shared_ptr<int, _S_single>;
template class __shared_ptr<ClassType, _S_single>;
template class __shared_ptr<IncompleteClass, _S_single>;