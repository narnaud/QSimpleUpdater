/*
 * Copyright (c) 2015-2016 Alex Spataru <alex_spataru@outlook.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <QTest>
#include <QSimpleUpdater.h>
#include "Test_Versioning.h"
#include "Test_Updater.h"
#include "Test_Downloader.h"
#include "Test_QSimpleUpdater.h"

#define runTest(T)                                                                                                     \
   {                                                                                                                   \
      T tt;                                                                                                            \
      status |= QTest::qExec(&tt, argc, argv);                                                                         \
   }

int main(int argc, char *argv[])
{
   int status = 0;

   // runTest(Test_Versioning);
   // runTest(Test_Updater);
   // runTest(Test_Downloader);
   // runTest(Test_QSimpleUpdater);

   {
      Test_Versioning tt;
      status |= QTest::qExec(&tt, argc, argv);
   }
   {
      Test_Updater tt;
      status |= QTest::qExec(&tt, argc, argv);
   }
   {
      Test_Downloader tt;
      status |= QTest::qExec(&tt, argc, argv);
   }
   {
      Test_QSimpleUpdater tt;
      status |= QTest::qExec(&tt, argc, argv);
   }

   return status;
}
