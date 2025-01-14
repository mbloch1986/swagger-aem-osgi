# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplCacheCqBufferedImageCacheInfo do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"pid",
    :"title",
    :"description",
    :"properties"
  ]

  @type t :: %__MODULE__{
    :"pid" => String.t,
    :"title" => String.t,
    :"description" => String.t,
    :"properties" => ComDayCqDamCoreImplCacheCqBufferedImageCacheProperties
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplCacheCqBufferedImageCacheInfo do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"properties", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplCacheCqBufferedImageCacheProperties, options)
  end
end

