/*****************************************************************************
*                                                                            *
*  OpenNI 1.0 Alpha                                                          *
*  Copyright (C) 2010 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of OpenNI.                                              *
*                                                                            *
*  OpenNI is free software: you can redistribute it and/or modify            *
*  it under the terms of the GNU Lesser General Public License as published  *
*  by the Free Software Foundation, either version 3 of the License, or      *
*  (at your option) any later version.                                       *
*                                                                            *
*  OpenNI is distributed in the hope that it will be useful,                 *
*  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the              *
*  GNU Lesser General Public License for more details.                       *
*                                                                            *
*  You should have received a copy of the GNU Lesser General Public License  *
*  along with OpenNI. If not, see <http://www.gnu.org/licenses/>.            *
*                                                                            *
*****************************************************************************/


#include "MockIRGenerator.h"

MockIRGenerator::MockIRGenerator(const XnChar* strName) : MockMapGenerator(strName)
{

}

MockIRGenerator::~MockIRGenerator()
{

}

XnIRPixel* MockIRGenerator::GetIRMap()
{
	return (XnIRPixel*)GetCurrentData();
}

XnUInt32 MockIRGenerator::GetBytesPerPixel()
{
	return sizeof(XnIRPixel);
}
