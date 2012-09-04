/*******************************************************************************

   This file is part of PyTango, a python binding for Tango

   http://www.tango-controls.org/static/PyTango/latest/doc/html/index.html

   Copyright 2011 CELLS / ALBA Synchrotron, Bellaterra, Spain
   
   PyTango is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   PyTango is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.
  
   You should have received a copy of the GNU Lesser General Public License
   along with PyTango.  If not, see <http://www.gnu.org/licenses/>.
   
*******************************************************************************/

#pragma once

#include <string>
#include <vector>

typedef std::vector<std::string> StdStringVector;
typedef std::vector<long> StdLongVector;
typedef std::vector<double> StdDoubleVector;

namespace PyTango
{
    enum ExtractAs {
        ExtractAsNumpy,
        ExtractAsByteArray,
        ExtractAsBytes,
        ExtractAsTuple,
        ExtractAsList,
        ExtractAsString,
        ExtractAsNothing
    };
    
    enum ImageFormat {
        RawImage,
        JpegImage
    };
}
