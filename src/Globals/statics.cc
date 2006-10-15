/*
	This file is part of the metalink program
	Copyright (C) 2005  A. Bram Neijt <bneijt@gmail.com>

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#include "Globals.ih"

std::string const Globals::programName("metalink");
std::string const Globals::programDescription("Metalink XML generator");
unsigned const Globals::version[] = {0,2,0};


//Legacy options
bool Globals::showDTD(false);
bool Globals::noxsl(true);
std::string Globals::xsl("xsl/metalinks_xhtml.xsl");
std::string Globals::metalinkExtension(".metalinks");
bool Globals::domd5(true);
bool Globals::dosha1(true);
bool Globals::dosha512(true);
bool Globals::doed2k(true);
bool Globals::dognunet070(true);
