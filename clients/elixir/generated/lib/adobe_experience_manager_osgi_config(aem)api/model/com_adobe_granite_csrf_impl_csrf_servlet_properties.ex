# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteCsrfImplCsrfServletProperties do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"csrf.token.expires.in",
    :"sling.auth.requirements"
  ]

  @type t :: %__MODULE__{
    :"csrf.token.expires.in" => ConfigNodePropertyInteger,
    :"sling.auth.requirements" => ConfigNodePropertyString
  }
end

defimpl Poison.Decoder, for: AdobeExperienceManagerOSGIConfig(AEM)API.Model.ComAdobeGraniteCsrfImplCsrfServletProperties do
  import AdobeExperienceManagerOSGIConfig(AEM)API.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"csrf.token.expires.in", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyInteger, options)
    |> deserialize(:"sling.auth.requirements", :struct, AdobeExperienceManagerOSGIConfig(AEM)API.Model.ConfigNodePropertyString, options)
  end
end

