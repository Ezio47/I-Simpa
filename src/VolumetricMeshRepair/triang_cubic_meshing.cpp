/* ----------------------------------------------------------------------
* I-SIMPA (http://i-simpa.ifsttar.fr). This file is part of I-SIMPA.
*
* I-SIMPA is a GUI for 3D numerical sound propagation modelling dedicated
* to scientific acoustic simulations.
* Copyright (C) 2007-2014 - IFSTTAR - Judicael Picaut, Nicolas Fortin
*
* I-SIMPA is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
* 
* I-SIMPA is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software Foundation,
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA or 
* see <http://ww.gnu.org/licenses/>
*
* For more information, please consult: <http://i-simpa.ifsttar.fr> or 
* send an email to i-simpa@ifsttar.fr
*
* To contact Ifsttar, write to Ifsttar, 14-20 Boulevard Newton
* Cite Descartes, Champs sur Marne F-77447 Marne la Vallee Cedex 2 FRANCE
* or write to scientific.computing@ifsttar.fr
* ----------------------------------------------------------------------*/

#include "triang_cubic_meshing.hpp"
#include <iostream>
#include <list>


namespace Triangulators
{
	struct weigh_parameters_t
	{
		SpatialDiscretization::weight_t volId;
	};
	inline bool IsOutside( const SpatialDiscretization::weight_t& weightValue,const weigh_parameters_t& weigh_parameters)
	{
		return weightValue!=weigh_parameters.volId;
	}

	void CubicTriangulator::Triangulate(ScalarFieldBuilders::ScalarFieldCreator& inData,const SpatialDiscretization::weight_t& volId, progressOperation& mainProcess)
	{
		/*
		weigh_parameters_t weigh_parameters;
		weigh_parameters.volId=volId;
		BeginFeedingFaces();


		ivec3 coordinates;
		long cellCount(inData.GetDomainSize());
		int nbtri;
		progressOperation thisProcess(&mainProcess,cellCount*cellCount);
		for(coordinates.x=0;coordinates.x<cellCount;coordinates.x++)
		{
			for(coordinates.y=0;coordinates.y<cellCount;coordinates.y++)
			{
				progressOperation thisSubProcess(&thisProcess,1);
				if(inData.ContainsVol(ivec2(coordinates.x,coordinates.y),weigh_parameters.volId))
				{

					for(coordinates.z=0;coordinates.z<cellCount;coordinates.z++)
					{
						//inData.GetCenterCellCoordinates(coordinates+i7)
						//grid.val[2]=WeightEvaluation(inData.GetMatrixValue(coordinates+i2),weigh_parameters);
					}
				}
			}
		}
		FinishFeedingFaces();
		*/
	}
}