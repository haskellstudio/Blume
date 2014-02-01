/*
 ==============================================================================
 
 This file is part of Blume
 Copyright 2010 William Andrew Burnson
 
 ------------------------------------------------------------------------------
 
 Blume can be redistributed and/or modified under the terms of the
 GNU General Public License, as published by the Free Software Foundation;
 either version 3 of the License, or (at your option) any later version.
 
 Blume is distributed in the hope that it will be useful, but
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 for more details.
 
 You should have received a copy of the GNU General Public License
 along with Blume; if not, visit www.gnu.org/licenses or write to
 the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 Boston, MA 02111-1307 USA
 
 ==============================================================================
 */
 
#include "Interaction.h"

#include "Elements.h"
 
Interaction::Interaction(prim::math::Vector p, Representation::Section* s,
  InteractionType t, prim::number r, bool cross, bool circle, bool rectangle,
  prim::count seg) : position(p), section(s), segment(seg),  type(t),
  radius(r), drawCross(cross), drawCircle(circle),drawRectangle(rectangle)
{
}

Interaction::Interaction()
{
}
