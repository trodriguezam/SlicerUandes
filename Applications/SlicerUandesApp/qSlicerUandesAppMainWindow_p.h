/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerUandesAppMainWindow_p_h
#define __qSlicerUandesAppMainWindow_p_h

// SlicerUandes includes
#include "qSlicerUandesAppMainWindow.h"

// Slicer includes
#include "qSlicerMainWindow_p.h"

//-----------------------------------------------------------------------------
class Q_SLICERUANDES_APP_EXPORT qSlicerUandesAppMainWindowPrivate
  : public qSlicerMainWindowPrivate
{
  Q_DECLARE_PUBLIC(qSlicerUandesAppMainWindow);
public:
  typedef qSlicerMainWindowPrivate Superclass;
  qSlicerUandesAppMainWindowPrivate(qSlicerUandesAppMainWindow& object);
  virtual ~qSlicerUandesAppMainWindowPrivate();

  virtual void init();
  /// Reimplemented for custom behavior
  virtual void setupUi(QMainWindow * mainWindow);
};

#endif
