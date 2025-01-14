# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqHistoryImplHistoryRequestFilterProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"history.requestFilter.excludedSelectors",
    :"history.requestFilter.excludedExtensions"
  ]

  @type t :: %__MODULE__{
    :"history.requestFilter.excludedSelectors" => ConfigNodePropertyArray,
    :"history.requestFilter.excludedExtensions" => ConfigNodePropertyArray
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqHistoryImplHistoryRequestFilterProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"history.requestFilter.excludedSelectors", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
    |> deserialize(:"history.requestFilter.excludedExtensions", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyArray, options)
  end
end

