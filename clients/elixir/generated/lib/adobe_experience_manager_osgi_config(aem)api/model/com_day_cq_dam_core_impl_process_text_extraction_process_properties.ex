# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplProcessTextExtractionProcessProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"mimeTypes",
    :"maxExtract"
  ]

  @type t :: %__MODULE__{
    :"mimeTypes" => ConfigNodePropertyArray,
    :"maxExtract" => ConfigNodePropertyInteger
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComDayCqDamCoreImplProcessTextExtractionProcessProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"mimeTypes", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"maxExtract", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
  end
end

