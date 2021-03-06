/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ecr/model/LayerAvailability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");

namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace LayerAvailabilityMapper
      {


        LayerAvailability GetLayerAvailabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return LayerAvailability::AVAILABLE;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return LayerAvailability::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayerAvailability>(hashCode);
          }

          return LayerAvailability::NOT_SET;
        }

        Aws::String GetNameForLayerAvailability(LayerAvailability enumValue)
        {
          switch(enumValue)
          {
          case LayerAvailability::AVAILABLE:
            return "AVAILABLE";
          case LayerAvailability::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace LayerAvailabilityMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
