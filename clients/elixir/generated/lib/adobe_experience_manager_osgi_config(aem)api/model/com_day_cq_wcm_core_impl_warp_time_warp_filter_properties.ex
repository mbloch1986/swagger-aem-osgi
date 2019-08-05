# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWcmCoreImplWarpTimeWarpFilterProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"filter.order",
    :"filter.scope"
  ]

  @type t :: %__MODULE__{
    :"filter.order" => ConfigNodePropertyString,
    :"filter.scope" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqWcmCoreImplWarpTimeWarpFilterProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"filter.order", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
    |> deserialize(:"filter.scope", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end
