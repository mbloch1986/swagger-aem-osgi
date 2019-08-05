# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteInfocollectorInfoCollectorProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"granite.infocollector.includeThreadDumps",
    :"granite.infocollector.includeHeapDump"
  ]

  @type t :: %__MODULE__{
    :"granite.infocollector.includeThreadDumps" => ConfigNodePropertyBoolean,
    :"granite.infocollector.includeHeapDump" => ConfigNodePropertyBoolean
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteInfocollectorInfoCollectorProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"granite.infocollector.includeThreadDumps", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
    |> deserialize(:"granite.infocollector.includeHeapDump", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyBoolean, options)
  end
end
