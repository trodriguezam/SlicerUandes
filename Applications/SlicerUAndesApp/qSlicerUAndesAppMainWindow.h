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

#ifndef __qSlicerUAndesAppMainWindow_h
#define __qSlicerUAndesAppMainWindow_h

// SlicerUAndes includes
#include "qSlicerUAndesAppExport.h"
class qSlicerUAndesAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_SLICERUANDES_APP_EXPORT qSlicerUAndesAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qSlicerUAndesAppMainWindow(QWidget *parent=0);
  virtual ~qSlicerUAndesAppMainWindow();

public slots:
  void on_HelpAboutSlicerUAndesAppAction_triggered();

protected:
  qSlicerUAndesAppMainWindow(qSlicerUAndesAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qSlicerUAndesAppMainWindow);
  Q_DISABLE_COPY(qSlicerUAndesAppMainWindow);
};

#endif
