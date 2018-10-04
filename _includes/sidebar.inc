<!-- Target for toggling the sidebar `.sidebar-checkbox` is for regular
     styles, `#sidebar-checkbox` for behavior. -->
<input type="checkbox" class="sidebar-checkbox" id="sidebar-checkbox">

<!-- Toggleable sidebar -->
<div class="sidebar" id="sidebar">
  <div class="sidebar-item">
    <p>{{ site.description }}</p>
  </div>

  <nav class="sidebar-nav">
    <a class="sidebar-nav-item{% if page.title == "Home" %} active{% endif %}" href={{ "/" | relative_url }}>Home</a>

    {% assign pages_list = site.pages %}
    {% for node in pages_list %}
      {% if node.title != null %}
        {% if node.layout == "page" %}
          <a class="sidebar-nav-item{% if page.url == node.url %} active{% endif %}" href="{{ node.url | relative_url }}">{{ node.title }}</a>
        {% endif %}
      {% endif %}
    {% endfor %}

    <a class="sidebar-nav-item" href="{{ site.github.repo }}">The GitHub repository for this blog</a>
    <span class="sidebar-nav-item">On v{{ site.version }}</span>
  </nav>

  <div class="sidebar-item">
    <p>
      &copy; {{ site.time | date: '%Y' }}. All rights reserved.
    </p>
  </div>
</div>