# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"brightedge.url"
  ]

  @type t :: %__MODULE__{
    :"brightedge.url" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeCqContentinsightImplServletsBrightEdgeProxyServletProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"brightedge.url", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

