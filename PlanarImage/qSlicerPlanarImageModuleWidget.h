/*==============================================================================

  Copyright (c) Laboratory for Percutaneous Surgery (PerkLab)
  Queen's University, Kingston, ON, Canada. All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Csaba Pinter, PerkLab, Queen's University
  and was supported through the Applied Cancer Research Unit program of Cancer Care
  Ontario with funds provided by the Ontario Ministry of Health and Long-Term Care

==============================================================================*/

#ifndef __qSlicerPlanarImageModuleWidget_h
#define __qSlicerPlanarImageModuleWidget_h

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerPlanarImageModuleExport.h"

class qSlicerPlanarImageModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup SlicerRt_QtModules_PlanarImage
class Q_SLICER_QTMODULES_PLANARIMAGE_EXPORT qSlicerPlanarImageModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT
  QVTK_OBJECT

public:
  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerPlanarImageModuleWidget(QWidget *parent=nullptr);
  virtual ~qSlicerPlanarImageModuleWidget();

public slots:

protected:
  QScopedPointer<qSlicerPlanarImageModuleWidgetPrivate> d_ptr;

  virtual void setup();

private:
  Q_DECLARE_PRIVATE(qSlicerPlanarImageModuleWidget);
  Q_DISABLE_COPY(qSlicerPlanarImageModuleWidget);
};

#endif
